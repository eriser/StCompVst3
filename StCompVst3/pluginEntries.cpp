
#include "public.sdk\source\main\pluginfactoryvst3.h"
#include "Version.h"
#include "vst3ids.h"
#include "AudioCompressorProcessor.h"
#include "AudioCompressorControllerSimple.h"
#include "AutoGateProcessor.h"

bool InitModule() { return true; }
bool DeinitModule() { return true; }

using namespace Steinberg::Vst;

BEGIN_FACTORY_DEF(VENDOR_STR, URL_STR, EMAIL_STR)

DEF_CLASS2(
	INLINE_UID_FROM_FUID(AudioCompressorProcessorID),
	PClassInfo::kManyInstances,
	kVstAudioEffectClass,
	VSTNAME_COMP_STR,
	Vst::kDistributable,
	"Fx",
	VERSION_COMP_STR,
	kVstVersionString,
	Steinberg::Vst::StComp::AudioCompressorProcessor::createInstrance
)

DEF_CLASS2(
	INLINE_UID_FROM_FUID(AutoGateProcessorID),
	PClassInfo::kManyInstances,
	kVstAudioEffectClass,
	VSTNAME_GATE_STR,
	Vst::kDistributable,
	"Fx",
	VERSION_GATE_STR,
	kVstVersionString,
	Steinberg::Vst::StGate::AutoGateProcessor::createInstrance
)

DEF_CLASS2(
	INLINE_UID_FROM_FUID(AudioCompressorControllerSimpleID),
	PClassInfo::kManyInstances,
	kVstComponentControllerClass,
	VSTNAME_COMP_STR " Simple Controller",
	0,
	"",
	VERSION_COMP_STR,
	kVstVersionString,
	Steinberg::Vst::StComp::AudioCompressorControllerSimple::createInstance
)

END_FACTORY

