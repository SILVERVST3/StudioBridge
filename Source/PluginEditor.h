#pragma once
#include <JuceHeader.h>
#include "PluginProcessor.h"
class StudioBridgeAudioProcessorEditor: public juce::AudioProcessorEditor{ public: StudioBridgeAudioProcessorEditor(StudioBridgeAudioProcessor&p):AudioProcessorEditor(&p){setSize(700,400);} void paint(juce::Graphics& g) override{g.fillAll(juce::Colours::black); g.setColour(juce::Colours::aqua); g.drawText("StudioBridge",getLocalBounds(),juce::Justification::centred);} void resized() override{} };