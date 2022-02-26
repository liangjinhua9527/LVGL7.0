# PC project for Littlev Graphics Library 7.0+

The [Littlev Graphic Library](https://github.com/littlevgl/lvgl) is written mainly for microcontrollers and embedded systems however you can run the library **on your PC** as well without any embedded hardware. The code written on PC can be simply copied when your are using an embedded system.

Using a PC simulator instead of an embedded hardware has got several advantages:
* **Costs $0** because you you don't have to buy design PCB
* **Fast** because you don't have to design an manufacture PCB
* **Collaborative** because any number of developers can work without hardware requirements
* **Developer friendly** because much easier and faster to debug on PC

## Requirements
* The PC simulator is cross platform so **Windows, Linux and OSX** is supported
* **SDL** a low level driver library to use graphics, handle mouse, keyboard etc.
* This project (configured for **Eclipse CDT IDE**)

## Usage

### Get the PC project

Clone the PC project and the related sub modules:

```
git clone --recursive https://github.com/littlevgl/pc_simulator_sdl_eclipse.git
```

or download it as zip [here](https://github.com/littlevgl/pc_simulator_sdl_eclipse/archive/dev-6.0.zip).

### Install SDL
You can download SDL from https://www.libsdl.org/

On Linux you can install it via terminal:
```
sudo apt-get update && sudo apt-get install -y build-essential libsdl2-dev
```
