#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/fl_message.H>

// Callback function for the button
void hello_cb(Fl_Widget*, void*) {
    fl_message("Hello, World!");
}

int main() {
    // Create a window
    Fl_Window *window = new Fl_Window(300, 200, "Hello FLTK");

    // Create a button
    Fl_Button *button = new Fl_Button(110, 80, 80, 40, "Click Me!");
    button->callback(hello_cb);

    // Show the window
    window->end();
    window->show();

    return Fl::run();
}
