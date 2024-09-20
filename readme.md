# 0xSurfer

**0xSurfer** is a minimalist web browser interface built using Qt and HTML. The application allows users to search the 
web via various search engines through a simple, dark-themed UI. It combines the flexibility of HTML for the user 
interface with the powerful browser integration of Qt's `QWebEngineView`.

## Features

- Dark-themed interface with a clean, modern look.
- Dropdown menu to select the search engine of your choice (Google, DuckDuckGo, Yandex, Bing).
- Press Enter or click the Search button to initiate a web search.
- Seamless integration between the HTML-based front-end and Qt-based backend.

## Screenshots

## Technologies Used

- **C++ with Qt**: Backend using Qt's `QWebEngineView` for rendering web pages and handling logic.
- **HTML/CSS**: Starting page interface with a responsive design.
- **Qt WebChannel**: For communication between the HTML frontend and the Qt C++ backend.

## Getting Started

### Prerequisites
Make sure you have the following installed:

- **Qt** (with WebEngine module): Version 6.7 or later
- **CMake** (for building the project)
- **C++ compiler** (such as g++ or MSVC)

### Installation
1. **Clone the repository**:
```bash
git clone https://github.com/yourusername/0xSurfer.git
cd 0xSurfer
```
2. **Build the project**:
`cmake`
```bash
mkdir build
cd build
cmake ..
make
```
3. **Run the application**:
```bash
./0xSurfer
```

## Usage
1. **Select your search engine**: Choose from Google, DuckDuckGo, Yandex, or Bing using the dropdown menu.
2. **Enter your search query**: Type your query in the input box.
3. **Initiate search**: Either press Enter or click the Search button to begin your search.

The result page will load within the browser window provided by Qt's `QWebEngineView`.

## License
This project is licensed under the [MIT License]().

## Contributions

Feel free to contribute by submitting issues or pull requests! Make sure to follow the contribution guidelines before submitting.

Enjoy surfing the web with 0xSurfer!

