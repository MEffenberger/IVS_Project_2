#!/bin/bash

# Install any necessary dependencies
sudo apt-get install qt5-default

# Copy the binary executable to /usr/local/bin
sudo cp build-calculator-Desktop-Release/calculator /usr/local/bin
