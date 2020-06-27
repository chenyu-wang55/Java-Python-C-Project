//
//  title.cpp
//  CS331_HW07
//
//  Created by Chenyu Wang on 12/17/19.
//  Copyright © 2019 chenyu wang. All rights reserved.
//

#include "title.h"

Tile::Tile(int tileNumber)
{
    this->m_Number=tileNumber;
    this->setText(QString::number(tileNumber+1));
}
