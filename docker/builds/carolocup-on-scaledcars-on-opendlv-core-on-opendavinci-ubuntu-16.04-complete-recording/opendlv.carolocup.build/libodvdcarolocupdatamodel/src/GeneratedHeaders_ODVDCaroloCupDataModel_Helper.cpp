/*
 * THIS IS A GENERATED FILE - CHANGES WILL BE OVERWRITTEN.
 */

#include <iostream>
#include <odvdcarolocupdatamodel/GeneratedHeaders_ODVDCaroloCupDataModel.h>
#include <odvdcarolocupdatamodel/GeneratedHeaders_ODVDCaroloCupDataModel_Helper.h>
#include <opendavinci/odcore/base/Visitable.h>
#include <opendavinci/odcore/reflection/MessageFromVisitableVisitor.h>
extern "C" {
    odcore::reflection::Helper *newHelper() {
        return new GeneratedHeaders_ODVDCaroloCupDataModel_Helper;
    }
    void deleteHelper(odcore::reflection::Helper *h) {
        delete h;
    }
}
GeneratedHeaders_ODVDCaroloCupDataModel_Helper::~GeneratedHeaders_ODVDCaroloCupDataModel_Helper() {}
void GeneratedHeaders_ODVDCaroloCupDataModel_Helper::delegateVistor(odcore::data::Container &c, odcore::base::Visitor &v, bool &successfullyDelegated) {
    GeneratedHeaders_ODVDCaroloCupDataModel_Helper::__delegateVistor(c, v, successfullyDelegated);
}
odcore::reflection::Message GeneratedHeaders_ODVDCaroloCupDataModel_Helper::map(odcore::data::Container &c, bool &successfullyMapped) {
    return GeneratedHeaders_ODVDCaroloCupDataModel_Helper::__map(c, successfullyMapped);
}
void GeneratedHeaders_ODVDCaroloCupDataModel_Helper::__delegateVistor(odcore::data::Container &c, odcore::base::Visitor &v, bool &successfullyDelegated) {
    successfullyDelegated = false;
    if (c.getDataType() == chalmersrevere::carolocup::ExampleMessage::ID()) {
        chalmersrevere::carolocup::ExampleMessage payload = c.getData<chalmersrevere::carolocup::ExampleMessage>();
        payload.accept(v);
        successfullyDelegated = true;
    }
}
odcore::reflection::Message GeneratedHeaders_ODVDCaroloCupDataModel_Helper::__map(odcore::data::Container &c, bool &successfullyMapped) {
    successfullyMapped = false;
    odcore::reflection::Message msg;
    odcore::reflection::MessageFromVisitableVisitor mfvv;
    __delegateVistor(c, mfvv, successfullyMapped);
    if (successfullyMapped) {
        msg = mfvv.getMessage();
    }
    return msg;
}
