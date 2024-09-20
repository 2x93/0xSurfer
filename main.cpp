#include <QApplication>

#include <QWebEngineView>
#include <QWebChannel>
#include <QObject>

#include <QDir>

class BrowserBridge : public QObject {
    Q_OBJECT
public slots:
    void search(const QString& searchUrl) {
        qDebug() << "Searching: " << searchUrl;
        browser->setUrl(QUrl(searchUrl));
    }

public:
    QWebEngineView* browser;
};

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QWebEngineView* browser = new QWebEngineView;

    BrowserBridge* bridge = new BrowserBridge;
    bridge->browser = browser;

    QWebChannel* channel = new QWebChannel(browser->page());
    browser->page()->setWebChannel(channel);
    channel->registerObject(QStringLiteral("qtBridge"), bridge);

    QString relativePath = QCoreApplication::applicationDirPath() + "/../src/blank.html";

    browser->setUrl(QUrl::fromLocalFile(relativePath));
    browser->show();

    return QApplication::exec();
}

#include "main.moc"