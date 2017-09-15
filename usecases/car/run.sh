#!/bin/bash

if [ -f $HOME/CLionProjects/opendlv.scaledcars/usecases/car/DIT-168/configuration ];
then
    echo "Removing old file configuration..." >&2
    rm $HOME/CLionProjects/opendlv.scaledcars/usecases/car/DIT-168/configuration
else
    echo "File configuration does not exist!" >&2
fi

cd $HOME/CLionProjects/opendlv.scaledcars/usecases/car/DIT-168/
./configODV.sh n 100.10.16.40 1.4 0.02 0.1 0 0 y> configuration
cd $HOME/CLionProjects/opendlv.scaledcars/usecases/car/
docker-compose up --build > log.txt
