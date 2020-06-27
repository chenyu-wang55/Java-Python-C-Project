//
//  main.cpp
//  CS331_HW07
//
//  Created by Chenyu Wang on 12/17/19.
//  Copyright © 2019 chenyu wang. All rights reserved.
//


#include "puzzlewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PuzzleWindow window;
    window.show();

    return a.exec();
}
