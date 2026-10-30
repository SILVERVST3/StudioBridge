#pragma once
#include <JuceHeader.h>
class StudioBridgeAudioProcessorEditor: public juce::AudioProcessorEditor{ public: StudioBridgeAudioProcessorEditor(juce::AudioProcessor&p):AudioProcessorEditor(p){} void paint(juce::Graphics& g) override { g.fillAll(juce::Colours::black);} void resized() override {} };