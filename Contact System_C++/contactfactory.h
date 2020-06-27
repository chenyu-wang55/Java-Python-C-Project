//
//  contactfactory.hpp
//  CS331_HW03
//
//  Created by Chenyu Wang on 10/29/19.
//  Copyright © 2019 chenyu wang. All rights reserved.
//

#ifndef contactfactory_h_
#define contactfactory_h_

#include <QObject>
#include <cstdlib>
#include"time.h"
#include"contactlist.h"

class ContactFactory{
    QList<QString> firstNameL;
    QList<QString> lastNameL;
    QList<QString> streetL;
    QList<QString> cityL;
    QList<QString> zipCodeL;
    QList<QString> phoneNumberL;

public:
    ContactFactory();
    void operator>>(ContactList& cl);
    
};
#endif /* contactfactory_hpp */
