/**
 * 
 *  Simple Gtkmm Calculation
 * 
 *  File:   SimpleCalculatorWindow.h
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

#ifndef SIMPLECALCULATORWINDOW_H
#define	SIMPLECALCULATORWINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/entry.h>
#include <gtkmm/label.h>
#include <gtkmm/statusbar.h>
#include <gtkmm/box.h>

class SimpleCalculatorWindow : public Gtk::Window
{
public:
    SimpleCalculatorWindow();
    SimpleCalculatorWindow(const SimpleCalculatorWindow& orig);
    virtual ~SimpleCalculatorWindow();
protected:
    // Helper functions
    bool setup_view();
    // Signal handlers
    
    // Widget variables
    Gtk::Box    m_vbox_parent;
    Gtk::Box    m_vbox_statusbar;
    Gtk::Box    m_vbox_app;
private:

};

#endif	/* SIMPLECALCULATORWINDOW_H */

