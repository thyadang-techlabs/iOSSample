rm Podfile.lock
pod deintegrate
sleep .5
pod install 
sleep .5
./remove_cp.sh
sleep .5
