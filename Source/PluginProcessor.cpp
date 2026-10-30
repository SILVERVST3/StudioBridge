#include "PluginProcessor.h"
#include "PluginEditor.h"
StudioBridgeAudioProcessor::StudioBridgeAudioProcessor():AudioProcessor(BusesProperties().withInput("In",juce::AudioChannelSet::stereo(),true).withOutput("Out",juce::AudioChannelSet::stereo(),true)){}
void StudioBridgeAudioProcessor::processBlock(juce::AudioBuffer<float>& b, juce::MidiBuffer&){ if(b.getNumChannels()<2) return; auto*l=b.getWritePointer(0); auto*r=b.getWritePointer(1); for(int i=0;i<b.getNumSamples();++i){ float a=l[i], c=r[i]; l[i]=a+c*0.25f; r[i]=c+a*0.25f; }}
juce::AudioProcessorEditor* StudioBridgeAudioProcessor::createEditor(){ return new StudioBridgeAudioProcessorEditor(*this);} 