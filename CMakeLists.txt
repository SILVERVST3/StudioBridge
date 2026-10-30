target_link_libraries(StudioBridge
    PRIVATE
        juce::juce_audio_utils
        juce::juce_audio_processors
        juce::juce_gui_basics
        juce::juce_gui_extra
        juce::juce_dsp
cmake_minimum_required(VERSION 3.22)
project(StudioBridge VERSION 1.0.0)
include(FetchContent)
FetchContent_Declare(JUCE GIT_REPOSITORY https://github.com/juce-framework/JUCE.git GIT_TAG 8.0.8)
FetchContent_MakeAvailable(JUCE)
juce_add_plugin(StudioBridge COMPANY_NAME "StudioBridge Audio" IS_SYNTH FALSE NEEDS_MIDI_INPUT FALSE NEEDS_MIDI_OUTPUT FALSE IS_MIDI_EFFECT FALSE COPY_PLUGIN_AFTER_BUILD TRUE PLUGIN_MANUFACTURER_CODE StBr PLUGIN_CODE StB1 FORMATS VST3 PRODUCT_NAME "StudioBridge")
target_sources(StudioBridge PRIVATE Source/PluginProcessor.cpp Source/PluginEditor.cpp)
target_link_libraries(StudioBridge PRIVATE juce::juce_audio_utils juce::juce_dsp)
