# Nucleo-G431RB-Custom_inverter-V1
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donate_SM.gif)](https://paypal.me/helprahulcreate?locale.x=en_GB)

This repository includes **Field Oriented Control (FOC)** firmware based on **STM32G431-RB**, **3-Phase Inverter** Design files with **STM32 morpho connector** for **Nucleo 64 Expansion Boards**.The Inverter Design is based on **X-NUCLEO-IHM08M1** from ST-Micro.

The PCB's in this Project was sponsored by **JLCPCB (JiaLiChuang (HongKong) Co., Limited)**,They are a worldwide leading PCB prototype enterprise and a high-tech manufacturer specializing in quick PCB prototype and small-batch PCB production.The quality of PCB's are remarkable at extremely low prototyping price. Get your's done at as low as 2$ @ https://jlcpcb.com/. If you'r interested in manufacturing PCB's in this project, download the gerber from the rep and follow instruction for ordering at the end of this article.

#### Required Development Environments are :
* STM32- Cube IDE
* STM32- MCSDK
* STM32- Motor Profiler

#### PCB Design Tool :
* Altium Designer 20.14

### Table of Contents :
=======================
* [About Project](#About-Project)
> <b> Coming Up Soon 📢:</b> 
* [Firmware Desicription](#hardware)
* [Hardware Description](#foc-firmware)
* [Example Variants ](#example-variants)
* [Flashing](#flashing)
* [Diagnostics](#diagnostics)
* [Troubleshooting](#troubleshooting)
* [Projects and Links](#projects-and-links)
* [Contributions](#contributions)


  ---
## About Project
Fan of ST-micorelectronics ? Trying to rig up you'r own >1kw BLDC/PMSM Controller, this repository might just come very handy. Its been years since i started working on 
three phase motor controllers, took lot of effort and time to get here. Why reinvent the wheel ? out there are tons of open source projects as well as application notes from
various semiconductor manufacturers, you can just buy a plug and play type controller-inverter development kits like https://www.st.com/en/ecosystems/x-nucleo-ihm08m1.html with any Nucleo-64 board from St-micro or Insta-spin series from Texas Instruments https://www.ti.com/tool/BOOSTXL-DRV8305EVM.

#### So what's the point of this repository and who can benefit ?

* If you dont find **>1kw 48-80V Foc inverter**  out there or one costs greater than 100$. (Design in this rep can become way cheaper!)
* If you are a student team/technical club who wants custom made inverter/controller for events or competitions. (Just put you'r stuff on the PCB overlay and you'r good to go)
* If you want to test effects **boot-strap** v/s **isolated gate driving** topology on efficiency of inverter. 
