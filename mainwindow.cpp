#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "square.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    view = new QGraphicsView(this);
    scene = new QGraphicsScene(view);
    view->setScene(scene);
    this->setCentralWidget(view);
    view->show();

    int rectW = 200;
    int rectH = 200;
    // populate scene
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            Square *square = new Square(col, row, rectW, rectH);
            square->setPos(col * rectW, row * rectH);
            scene->addItem(square);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

