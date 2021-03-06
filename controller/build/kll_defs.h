/* Copyright (C) 2014-2016 by Jacob Alexander
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

// This file was generated by the kll compiler, DO NOT EDIT.
// Generation Date:    2016-06-26
// KLL Backend:        kiibohd
// KLL Git Rev:        6135cbb8329eff480c4100a1b46557f690ea604b
// KLL Git Changes:    None
// Compiler arguments:
//    ../kll/kll.py
//      /home/shamus/Desktop/controller/Scan/MatrixARM/capabilities.kll
//      /home/shamus/Desktop/controller/Macro/PartialMap/capabilities.kll
//      /home/shamus/Desktop/controller/Output/pjrcUSB/capabilities.kll
//      /home/shamus/Desktop/controller/Scan/MD1/defaultMap.kll
//      -d
//      /home/shamus/Desktop/controller/kll/layouts/md1Overlay.kll
//      /home/shamus/Desktop/controller/kll/layouts/stdFuncMap.kll
//      -p
//      /home/shamus/Desktop/controller/kll/layouts/hhkbpro2.kll
//    --backend
//      kiibohd
//    --templates
//      /home/shamus/Desktop/controller/kll/templates/kiibohdKeymap.h
//      /home/shamus/Desktop/controller/kll/templates/kiibohdDefs.h
//    --outputs
//      generatedKeymap.h
//      kll_defs.h
//
// - Base Layer -
//    MatrixArmCapabilities
//      /home/shamus/Desktop/controller/Scan/MatrixARM/capabilities.kll
//    PartialMapCapabilities
//      /home/shamus/Desktop/controller/Macro/PartialMap/capabilities.kll
//    pjrcUSBCapabilities
//      /home/shamus/Desktop/controller/Output/pjrcUSB/capabilities.kll
//    MD1
//      /home/shamus/Desktop/controller/Scan/MD1/defaultMap.kll
// - Default Layer -
//    md1Overlay
//      /home/shamus/Desktop/controller/kll/layouts/md1Overlay.kll
//    stdFuncMap
//      /home/shamus/Desktop/controller/kll/layouts/stdFuncMap.kll
// - Partial Layers -
//    Layer 1
//     hhkbpro2
//       /home/shamus/Desktop/controller/kll/layouts/hhkbpro2.kll



#pragma once

// ----- Enums -----

// Capability Indices
typedef enum CapabilityIndex {
	CustomAction_action1_capability_index,
	CustomAction_blockHold_capability_index,
	CustomAction_blockKey_capability_index,
	Macro_layerLatch_capability_index,
	Macro_layerLock_capability_index,
	Macro_layerRotate_capability_index,
	Macro_layerShift_capability_index,
	Macro_layerState_capability_index,
	Output_consCtrlSend_capability_index,
	Output_flashMode_capability_index,
	Output_kbdProtocolBoot_capability_index,
	Output_kbdProtocolNKRO_capability_index,
	Output_noneSend_capability_index,
	Output_sysCtrlSend_capability_index,
	Output_toggleKbdProtocol_capability_index,
	Output_usbCodeSend_capability_index,
	Output_usbMouse_capability_index,
} CapabilityIndex;



// ----- KLL Variables -----




// ----- Defines -----

// -- Interconnect Node Maximum --
#define InterconnectNodeMax 0x1



#define enableVirtualSerialPort_define 1
#define enableUSBResume_define 1
#define StateWordSize_define 8
#define enableKeyboard_define 1
#define enableRawIO_define 0
#define enableUSBSuspend_define 1
#define DebounceDivThreshold_define 65535
#define IndexWordSize_define 16
#define flashModeEnabled_define 0
#define enableUSBLowPowerNegotiation_define 0
#define enableDeviceRestartOnUSBTimeout_define 0
#define enableJoystick_define 0
#define DebounceThrottleDiv_define 0
#define enableMouse_define 1
#define KeyboardLocale_define 0
#define MinDebounceTime_define 5
#define USBProtocol_define 1
#define CapabilitiesNum_KLL 17
#define ResultMacroNum_KLL 97
#define TriggerMacroNum_KLL 98
#define LayerNum_KLL 2

