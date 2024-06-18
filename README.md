# Wavetable Synth VST Plugin

## Description

Wavetable Synth is a VST plugin developed using the JUCE framework. It offers a wide range of wavetable synthesis functionalities, enabling musicians and producers to create complex and dynamic sounds. The plugin is designed to be intuitive and easy to use while providing powerful modulation and sound manipulation capabilities.

## Features

- *Wavetable Library*: Multiple pre-loaded wavetables and the ability to import your own.
- *Advanced Modulation*: LFOs, envelopes, and custom modulation routes.
- *Filters*: Various filter types, including low-pass, high-pass, and band-pass.
- *Effects*: Includes effects such as reverb, delay, chorus, and distortion.
- *Intuitive Interface*: User-friendly graphical interface with easy-to-use controls.
- *Automation*: Fully automatable for integration with DAWs.

## System Requirements

- *Operating System*: Windows 10 or later, macOS 10.12 or later
- *Processor*: Intel Core i5 or equivalent
- *Memory*: 4 GB RAM (8 GB recommended)
- *Disk Space*: 200 MB for installation
- *Dependencies*: JUCE Framework, VST SDK

## Installation

### Windows

1. Download the plugin installer.
2. Run the installer and follow the on-screen instructions.
3. Open your DAW and verify that the plugin is listed among the available VSTs.

### macOS

1. Download the .dmg file of the plugin.
2. Mount the disk image and drag the plugin to the VST plugins folder.
3. Open your DAW and verify that the plugin is listed among the available VSTs.

## Building from Source

To build Wavetable Synth from source, follow these steps:

1. *Clone the repository*:
    sh
    git clone [https://github.com/your-username/wavetable-synth.git](https://github.com/filipeborato/WavetableSynth.git)
    cd WavetableSynth
    

2. *Install the JUCE Framework*:
    Download and install the JUCE framework from the [official website](https://juce.com/).

3. *Open the project in Projucer*:
    - Launch Projucer (tool provided by JUCE).
    - Open the .jucer file located in the project directory.
    - Configure the paths to the VST SDK and other necessary modules.

4. *Build the project*:
    - Choose the desired platform (Windows or macOS).
    - Use Projucer to export the project to your preferred IDE (Visual Studio, Xcode, etc.).
    - Build the project in your IDE.

## Usage

After installation or building, the plugin will be available in your preferred DAW. Load Wavetable Synth on an instrument track and explore the various features offered to create and modify your sounds.

## Contributing

Contributions are welcome! To contribute to the project:

1. Fork the repository.
2. Create a new branch:
    sh
    git checkout -b my-new-feature
    
3. Make your modifications.
4. Commit your changes:
    sh
    git commit -m 'Add new feature'
    
5. Push to the branch:
    sh
    git push origin my-new-feature
    
6. Open a Pull Request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For questions or support, contact us at: support@wavetable-synth.com

---

Enjoy Wavetable Synth and create amazing sounds!
