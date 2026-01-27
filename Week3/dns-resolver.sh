#!/bin/bash

hostfile=$1
dns=$2

echo "dns resolution for $1"

for i in $(seq 1 254); do
    nslookup "$1.$ip" "$2" | grep "name = "
  done
