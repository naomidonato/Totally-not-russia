#include "customerwindow.h"
#include "ui_customerwindow.h"

CustomerWindow::CustomerWindow(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::CustomerWindow)
{
  ui->setupUi(this);
}

CustomerWindow::~CustomerWindow()
{
  delete ui;
}
