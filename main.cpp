/* 
 * File:   main.cpp
 * Author: ashon
 *
 * Created on 30 December 2012, 8:59 PM
 */

#include "SimpleCalculatorWindow.h"
#include <gtkmm/application.h>

using namespace std;

/** 
 * Main application entry
 * 
 * @return int Run status code [0 on success| Error code on failure]
 */
int main(int argc, char** argv) {

    Glib::RefPtr<Gtk::Application> mainApp = Gtk::Application::create(argc, argv, "com.ashon-associates.gtk.simple.calc");
    
    // Creating an instance of the Calculator window class
    SimpleCalculatorWindow calcWindow;
    
    calcWindow.set_position(Gtk::WIN_POS_CENTER);
    
    return mainApp->run(calcWindow);
}

