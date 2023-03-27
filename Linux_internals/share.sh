#!/bin/bash

s=(10.126.60.134 )
	for i in ${s[@]}
	do
		nc $i 4444 < script
	done
}
