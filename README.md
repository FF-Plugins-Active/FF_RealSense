# FF_RealSense
Unofficial Intel RealSense Wrapper for Unreal Engine 5 with cross platform (Win64 and Android) support.
 
 ## ANDROID BUILD
* Open librealsense/wrappers/android with ``Android Studio``
* File -> Settings -> Settings -> Exprimental -> Enable ``Configure all Gradle tasks during Gradle Sync``
* File -> ``Sync Project with Gradle Files``
* On right panel, open ``Gradle``
* Right click and run ``LRS -> Tasks -> build -> assemble``
* outputs are (try which one of them works)
	* librealsense/wrappers/android/librealsense/build/intermediates/library_jni/release/jni/arm64-v8a/librealsense2.so
	* librealsense/wrappers/android/librealsense/build/intermediates/merged_native_libs/release/out/lib/arm64-v8a/librealsense2.so
* Android device should have "RS Camera" app installed.

## DEPENDENCY
https://github.com/FF-Plugins-Active/FF_QR_Processor

This is an optional variable for ``FF_QR_Processor``. If you don't want to integrate it, delete ZXing related template blueprints in plugin's content folder.</br>
https://github.com/FF-Plugins-Active/ExtendedVars/tree/main/Source/ExtendedVars
 
## INSTRUCTIONS
* You need to extract librealsense2.zip to its folder before using it on Android. (Source/FF_RealSense/ThirdParty/Android/libs)

## FEATURES
* RGB Stream
* Depth Stream
* Infrared Stream
* Distance Calculation
* QR Reader (with help of our QR Processor plugin)
* FRunnableThread based