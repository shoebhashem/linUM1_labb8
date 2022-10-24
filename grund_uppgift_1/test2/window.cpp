#include "window.h"
#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent) :
 QWidget(parent)
 {
 // Set size of the window
 setFixedSize(200, 100);

 // Create and position the button
 m_button = new QPushButton("Hello World", this);
 m_button->setGeometry(20, 20, 160, 60);

 // NEW : Make the connection
   connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));

}
