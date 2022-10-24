#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QPushButton button;
 button.setText("Hello World");
 button.setToolTip("A very nice button to click");
 button.show();

 return app.exec();
}
