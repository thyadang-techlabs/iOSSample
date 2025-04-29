rm Podfile.lock
pod deintegrate
sleep .5
pod install --repo-update
