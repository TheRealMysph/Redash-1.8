# Disclaimer
These files are the ones that you will add on `/jni/libraries/`, edit `/jni/Application.mk` accordingly to the library you'll use.
Don't add the folder on `/jni/libraries/`, only the .so files

# Building in Windows
Paste this source code onto your cmake folder and run this command:

`cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE="C:\Users\user\ndk\android-ndk-r16b\build\cmake\android.toolchain.cmake" -G "Ninja"`

Replace the toolchain file with your NDK toolchain file, you can also use any other generator but ninja is the standard for me, then compile.
