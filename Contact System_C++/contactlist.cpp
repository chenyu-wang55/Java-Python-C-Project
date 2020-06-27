//
//  contactlist.cpp
//  CS331_HW03
//
//  Created by Chenyu Wang on 10/30/19.
//  Copyright © 2019 chenyu wang. All rights reserved.
//

#include "contactlist.h"
#include <QStringList>

ContactList::ContactList(){
    
}

void ContactList::add(Contact c){
    this->append(c);
}

void ContactList::remove(Contact c){
    QString s1=c.toString();
    for(int i=0; i<this->size();i++){
        Contact c2=this->at(i);
        if(s1==c2.toString()){
            this->removeAt(i);
            break;
        }
    }
}

QStringList ContactList::getPhoneList(int category){
    QStringList l;
    for(int i=0;i<this->size();i++){
        Contact c=this->at(i);
        if(c.category==category){
            QString s=c.firstName+" "+c.lastName+"   "+c.phoneNumber;
            l.append(s);
        }
    }
    return l;
}

QStringList ContactList::getMailingList(int category){
    QStringList l;
    for(int i=0;i<this->size();i++){
        Contact c=this->at(i);
        if(c.category==category){
            QString s=c.street+"  "+c.city+"  "+c.zipCode;
            l.append(s);
        }
    }
    return l;
}
