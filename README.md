# Wavetable Synth VST Plugin

## Description

Wavetable Synth is a VST plugin developed using the JUCE framework. It offers a wide range of wavetable synthesis functionalities, enabling musicians and producers to create complex and dynamic sounds. 

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

``` 
git clone https://github.com/filipeborato/WavetableSynth
```

```
cd WavetableSynth
```    

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

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

Enjoy Wavetable Synth and create amazing sounds!
