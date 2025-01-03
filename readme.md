![STM32 board](./image/stm32board.jpg)

# Library for Embedded Code on STM32 Board

This repository contains embedded code for different components on the STM32 board. It serves as a library for Club Robot INSA Toulouse to work on STM32-based projects.

Contributions are welcome! If you have any improvements or bug fixes, feel free to submit a pull request.

## Table of Contents

- [Components supported list](#components-supported-list)
- [How to use this library](#how-to-use-this-library)
- [How to work on this project](#how-to-work-on-this-project)
- [Components](#components)
    - [DC Motor](#dc-motor)
    - [Encoder](#encoder)
    - [Servo](#servo)
    - [Herkulex servo](#herkulex-servo)
    - [CAN bus](#can-bus)
    - [UART](#uart)
    - [...]
- [Contributors](#contributors)

## Components supported list

- DC motor
- Encoder
- Servo
- Herkulex Servo
- CAN bus
- [...]

## How to use this library
**0. Create your STM32 project**

First you need to create a STM32CubeIDE project. If you already have one, skip this step. 

**Follow this guide to [Create a STM32 project](link to the guide).**

Next we will add this library as a submodule for your project.


**1. Add submodule**

From your project, add this library as a submodule with the following command :

`git submodule add https://github.com/ClubRobotInsat/stmlib.git`

**2. Initialize and update submodule**

Initialize and update your submodules to fetch the code :

`git submodule init`

`git submodule update`

**3. Update submodule to get the latest version from GitHub**

In the submodule repo :
`git pull`


**4. Add the library to your project**

To add the library to your project : 
-  Open your project in STM32CubeIDE
- Right-click on the project name, and select `New` -> `Folder`
- Click on `Advanced` and select `Link to alternate location (Linked Folder)`
- If the `stmlib` folder is in the root directory of your project, type `PROJECT_LOC/stmlib` in the `Location` field. If it is in another directory, type the path to the `stmlib` folder.
- Click on `Finish`

Now to include the library in the C include path :
- Click on the `Project` -> `Properties` (upper bar)
- In the `C/C++ General` section, click on `Paths and Symbols`
- In the `Includes` tab, click on `Add` and select `Workspace` then select the `stmlib` folder
- In the `Source Location` field, click on `Add folder` and select the `stmlib` folder
- Click on `Apply and Close`

```markdown
# Attention :
If your haven't configured the STM32 board hardware proprely, you may not be able to compile the project.

Some elements in the library require the STM32 board hardware to be configured properly.

For example : dcmotor.h requires a timer to be configured so that stm32g4xx_hal_tim.h is included in the project.
```
**5. Activate modules of the library**

By default, all modules of the library are disabled to avoid STM32CubeIDE compilation errors. Hence, even if you include the library in your code, the code of the library will not be compiled. 
To active a module,  uncomment the line in the `stmlib_conf.h` with the name of the module you want to activate:

```C
// In stmlib_conf.h
/* DC Motor */
#define MOTOR_DC_ENABLED // <-- Uncomment this line to activate the DC motor module

```

That's it! You can now include the library in your code. Check the [components](#components) section for more exemples.

## How to contribute to this project

**0. Add `stmlib` as a submodule**

Create a STM32 project (use for testing) and add the library as a submodule (see [How to use this library](#how-to-use-this-library))

**1. To create a new feature or fix a bug**

- Create a new branch with the following command :
`git checkout -b [branch_name]`

- Make your changes and commit them with the following commands :
`git add .`
`git commit -m "Your message"`

- Push your changes to the remote repository with the following command :
`git push origin [branch_name]`

- Create a pull request on GitHub to merge the development branch with the main branch

## Components

### DC motor

View the [DC motor documentation](dcmotor/dcmotor_doc.md) for more information.

### Encoder

Description of component 2 and how to use it.

### Servo

Description of component 3 and how to use it.

### Herkulex servo

Description of component 3 and how to use it.

### CAN bus

Description of component 3 and how to use it.

### UART

Description of component 3 and how to use it.

## Contributors
- Triet NGUYEN (trietngh)
- Huong Cam TANG (tanghuongcam)
- Liam CHRISMENT (LiamKaist)