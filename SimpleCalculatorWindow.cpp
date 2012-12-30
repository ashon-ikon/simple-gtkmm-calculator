/**
 * 
 *  Simple Gtkmm Calculation
 * 
 *  File:   SimpleCalculatorWindow.cpp
 * 
 *  Copyright (C) 30 December 2012  ashon
 *     Yinka Kunle Asonibare <http://ashon-associates.com/>
 * 
 *     This program is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 * 
 * 
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 * 
 *     You should have received a copy of the GNU General Public License
 *     along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "SimpleCalculatorWindow.h"
#include <iostream>

using namespace std;

SimpleCalculatorWindow::SimpleCalculatorWindow()
{
    // Setup the view
    if (!setup_view()) {
        cout << "Could not create view!" << endl;
        hide();
    }
    
    show_all_children();
}

SimpleCalculatorWindow::SimpleCalculatorWindow(const SimpleCalculatorWindow& orig) 
{
}

SimpleCalculatorWindow::~SimpleCalculatorWindow()
{
}

/**
 * This is an helper function to setup the GTK widget view
 * 
 * @return bool True on successful setup
 */
bool SimpleCalculatorWindow::setup_view()
{
   m_vbox_parent.set_orientation(Gtk::ORIENTATION_VERTICAL);
   
   // Set up child boxes
   m_vbox_app.set_orientation(Gtk::ORIENTATION_VERTICAL, 10);
   m_vbox_statusbar.set_orientation(Gtk::ORIENTATION_VERTICAL, 10);
   
   this->add(m_vbox_parent);
   
   m_vbox_parent.pack_start(m_vbox_app);
   m_vbox_parent.pack_start(m_vbox_statusbar);
   
   
   return true;
}