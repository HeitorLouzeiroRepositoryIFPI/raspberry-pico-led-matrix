# Raspberry Pico LED Matrix Controller

<!-- PROJECT SHIELDS -->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

<!-- PROJECT LOGO -->
<br/>
<div align="center">
  <h3 align="center">Raspberry Pico LED Matrix Controller</h3>

  <p align="center">
    A Raspberry Pi Pico project for controlling an LED matrix display with custom animations and patterns
    <br/>
    <a href="https://github.com/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix/issues">Report Bug</a>
    ·
    <a href="https://github.com/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix/issues">Request Feature</a>
    ·
    <a href="https://www.youtube.com/watch?v=G0BixDPmA0k">Youtube Video</a>
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li><a href="#features">Features</a></li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>

## About The Project

The Raspberry Pico LED Matrix Controller is a project that uses a Raspberry Pi Pico microcontroller to drive an LED matrix display. It features custom animations, text displays, and interactive patterns controlled through GPIO buttons.

### Built With

* [Raspberry Pi Pico C/C++ SDK](https://www.raspberrypi.com/documentation/microcontrollers/c_sdk.html)
* [PIO (Programmable I/O)](https://www.raspberrypi.com/documentation/microcontrollers/raspberry-pi-pico.html#programmable-io)
* CMake

## Features

* 🎨 Multiple LED patterns and animations
* 📝 Display text (IFPI letters)
* 🎯 Interactive control using GPIO buttons
* 🌈 RGB color support
* ⚡ Efficient PIO-based LED control
* 🔄 Smooth animations with configurable timing

## Getting Started

### Prerequisites

* Raspberry Pi Pico
* LED Matrix Display
* Buttons for control
* [Raspberry Pi Pico SDK](https://www.raspberrypi.com/documentation/microcontrollers/c_sdk.html)
* CMake
* Build tools (GCC)

### Installation

1. Clone the repository
   ```sh
   git clone https://github.com/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix.git
   ```
2. Navigate to the project directory
   ```sh
   cd raspberry-pico-led-matrix
   ```
3. Create and enter build directory
   ```sh
   mkdir build && cd build
   ```
4. Generate build files with CMake
   ```sh
   cmake ..
   ```
5. Build the project
   ```sh
   make
   ```
6. Flash the compiled `.uf2` file to your Raspberry Pi Pico

## Usage

The project supports various display modes and patterns:

1. Press Button A + B simultaneously to display "IFPI" text
2. Press Button A for geometric shapes animation sequence
3. Press Button B for custom pattern displays

## Roadmap

- [x] Basic LED matrix control
- [x] Text display support
- [x] Multiple animation patterns
- [x] Button controls


See the [open issues](https://github.com/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix/issues) for a full list of proposed features and known issues.

## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

Distributed under the MIT License. See  [LICENSE](LICENSE) for more information.

## Contact
<div align='center'>  
  <a href="https://www.instagram.com/heitorlouzeiro/" target="_blank">
    <img src="https://img.shields.io/badge/-Instagram-%23E4405F?style=for-the-badge&logo=instagram&logoColor=white" target="_blank">
  </a> 
  <a href = "mailto:heitorlouzeirodev@gmail.com">
    <img src="https://img.shields.io/badge/-Gmail-%23333?style=for-the-badge&logo=gmail&logoColor=white" target="_blank">    
  </a>
  <a href="https://www.linkedin.com/in/heitor-louzeiro/" target="_blank">
    <img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank">
  </a> 
</div>
</br>
</br>

Project Link: [https://github.com/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix](https://github.com/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix)

## Acknowledgments

* [Raspberry Pi Foundation](https://www.raspberrypi.org/)
* [PIO Documentation](https://www.raspberrypi.com/documentation/microcontrollers/raspberry-pi-pico.html#programmable-io)

<!-- MARKDOWN LINKS & IMAGES -->
[contributors-shield]: https://img.shields.io/github/contributors/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix.svg?style=for-the-badge
[contributors-url]: https://github.com/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix.svg?style=for-the-badge
[forks-url]: https://github.com/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix/network/members
[issues-shield]: https://img.shields.io/github/issues/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix.svg?style=for-the-badge
[issues-url]: https://github.com/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix/issues
[license-shield]: https://img.shields.io/github/license/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix.svg?style=for-the-badge
[license-url]: https://github.com/HeitorLouzeiroRepositoryIFPI/raspberry-pico-led-matrix/blob/master/LICENSE
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/your-linkedin