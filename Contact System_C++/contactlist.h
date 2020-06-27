//
//  contactlist.hpp
//  CS331_HW03
//
//  Created by Chenyu Wang on 10/30/19.
//  Copyright © 2019 chenyu wang. All rights reserved.
//

#ifndef contactlist_h_
#define contactlist_h_

#include <QObject>
#include "contact.h"
#include "qlist.h"

class ContactList : public QList<Contact>{
public:
    ContactList();
    void add(Contact c);
    void remove(Contact c);
    QStringList getPhoneList(int category);
    QStringList getMailingList(int category);
};
#endif /* contactlist_hpp */
