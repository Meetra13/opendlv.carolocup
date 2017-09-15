#ifndef COMMUNICATIONLINK_H_
#define COMMUNICATIONLINK_H_


#include <opendavinci/odcore/base/module/DataTriggeredConferenceClientModule.h>
#include <opendavinci/odcore/data/Container.h>
#include <opendavinci/odcore/data/TimeStamp.h>

#include <opendavinci/odcore/wrapper/SharedMemory.h>
#include <opendavinci/odcore/wrapper/SharedMemoryFactory.h>

#include <opendavinci/GeneratedHeaders_OpenDaVINCI.h>
#include <automotivedata/GeneratedHeaders_AutomotiveData.h>
#include "odvdscaledcarsdatamodel/generated/gap/CommunicationLinkMSG.h"
#include "odvdscaledcarsdatamodel/generated/gap/LaneFollowerMSG.h"
#include "odvdscaledcarsdatamodel/generated/gap/OvertakerMSG.h"
#include "odvdscaledcarsdatamodel/generated/gap/ParkerMSG.h"
#include "odvdscaledcarsdatamodel/generated/gap/SensorsMSG.h"
#include "odvdscaledcarsdatamodel/generated/gap/UdpMSG.h"

#include <iostream>
#include <memory>
#include <stdint.h>
#include <string>
#include <opendavinci/odcore/base/Thread.h>

#include <opendavinci/odcore/base/KeyValueConfiguration.h>

#include "defines.h"

namespace scaledcars {
    namespace control {

        using namespace std;
        using namespace odcore;
        using namespace odcore::base::module;
        using namespace odcore::data;
        using namespace odcore::wrapper;

        class CommunicationLink :
                public DataTriggeredConferenceClientModule {

        private:
            /**
             * "Forbidden" copy constructor.
             *
             * Goal: The compiler should warn already at compile time
             * for unwanted bugs caused by any misuse of the copy
             * constructor.
             *
             * @param obj Reference to an object of this class.
             */
            CommunicationLink(const CommunicationLink &/*obj*/);

            /**
             * "Forbidden" assignment operator.
             *
             * Goal: The compiler should warn already at compile time
             * for unwanted bugs caused by any misuse of the assignment
             * operator.
             *
             * @param obj Reference to an object of this class.
             * @return Reference to this instance.
             */
            CommunicationLink &operator=(const CommunicationLink &/*obj*/);

        public:
            /**
             * Constructor.
             *
             * @param argc Number of command line arguments.
             * @param argv Command line arguments.
             */
            CommunicationLink(const int32_t &argc, char **argv);

            virtual ~CommunicationLink();

        private:
            gap::CommunicationLinkMSG communicationLinkMSG;
            gap::LaneFollowerMSG laneFollowerMSG;
            gap::OvertakerMSG overtakerMSG;
            gap::ParkerMSG parkerMSG;
            gap::SensorsMSG sensorsMSG;
            gap::UdpMSG UDPMSG;

            int udp_stop;

            virtual void setUp();

            virtual void tearDown();

            virtual void nextContainer(Container &c);

        };
    }//control
}//scaledcars

#endif /*COMMUNICATIONLINK_H_*/