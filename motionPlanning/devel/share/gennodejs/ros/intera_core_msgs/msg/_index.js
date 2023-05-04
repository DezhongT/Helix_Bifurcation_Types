
"use strict";

let AnalogIOState = require('./AnalogIOState.js');
let IONodeConfiguration = require('./IONodeConfiguration.js');
let NavigatorStates = require('./NavigatorStates.js');
let HomingCommand = require('./HomingCommand.js');
let EndpointStates = require('./EndpointStates.js');
let SEAJointState = require('./SEAJointState.js');
let IOStatus = require('./IOStatus.js');
let JointCommand = require('./JointCommand.js');
let IOComponentConfiguration = require('./IOComponentConfiguration.js');
let HomingState = require('./HomingState.js');
let EndpointState = require('./EndpointState.js');
let EndpointNamesArray = require('./EndpointNamesArray.js');
let CollisionAvoidanceState = require('./CollisionAvoidanceState.js');
let CameraSettings = require('./CameraSettings.js');
let HeadPanCommand = require('./HeadPanCommand.js');
let IOComponentStatus = require('./IOComponentStatus.js');
let NavigatorState = require('./NavigatorState.js');
let InteractionControlCommand = require('./InteractionControlCommand.js');
let IODataStatus = require('./IODataStatus.js');
let JointLimits = require('./JointLimits.js');
let CollisionDetectionState = require('./CollisionDetectionState.js');
let IODeviceStatus = require('./IODeviceStatus.js');
let AnalogIOStates = require('./AnalogIOStates.js');
let DigitalIOStates = require('./DigitalIOStates.js');
let IOComponentCommand = require('./IOComponentCommand.js');
let IONodeStatus = require('./IONodeStatus.js');
let RobotAssemblyState = require('./RobotAssemblyState.js');
let DigitalOutputCommand = require('./DigitalOutputCommand.js');
let IODeviceConfiguration = require('./IODeviceConfiguration.js');
let CameraControl = require('./CameraControl.js');
let HeadState = require('./HeadState.js');
let AnalogOutputCommand = require('./AnalogOutputCommand.js');
let URDFConfiguration = require('./URDFConfiguration.js');
let DigitalIOState = require('./DigitalIOState.js');
let InteractionControlState = require('./InteractionControlState.js');
let CalibrationCommandAction = require('./CalibrationCommandAction.js');
let CalibrationCommandFeedback = require('./CalibrationCommandFeedback.js');
let CalibrationCommandResult = require('./CalibrationCommandResult.js');
let CalibrationCommandActionResult = require('./CalibrationCommandActionResult.js');
let CalibrationCommandGoal = require('./CalibrationCommandGoal.js');
let CalibrationCommandActionGoal = require('./CalibrationCommandActionGoal.js');
let CalibrationCommandActionFeedback = require('./CalibrationCommandActionFeedback.js');

module.exports = {
  AnalogIOState: AnalogIOState,
  IONodeConfiguration: IONodeConfiguration,
  NavigatorStates: NavigatorStates,
  HomingCommand: HomingCommand,
  EndpointStates: EndpointStates,
  SEAJointState: SEAJointState,
  IOStatus: IOStatus,
  JointCommand: JointCommand,
  IOComponentConfiguration: IOComponentConfiguration,
  HomingState: HomingState,
  EndpointState: EndpointState,
  EndpointNamesArray: EndpointNamesArray,
  CollisionAvoidanceState: CollisionAvoidanceState,
  CameraSettings: CameraSettings,
  HeadPanCommand: HeadPanCommand,
  IOComponentStatus: IOComponentStatus,
  NavigatorState: NavigatorState,
  InteractionControlCommand: InteractionControlCommand,
  IODataStatus: IODataStatus,
  JointLimits: JointLimits,
  CollisionDetectionState: CollisionDetectionState,
  IODeviceStatus: IODeviceStatus,
  AnalogIOStates: AnalogIOStates,
  DigitalIOStates: DigitalIOStates,
  IOComponentCommand: IOComponentCommand,
  IONodeStatus: IONodeStatus,
  RobotAssemblyState: RobotAssemblyState,
  DigitalOutputCommand: DigitalOutputCommand,
  IODeviceConfiguration: IODeviceConfiguration,
  CameraControl: CameraControl,
  HeadState: HeadState,
  AnalogOutputCommand: AnalogOutputCommand,
  URDFConfiguration: URDFConfiguration,
  DigitalIOState: DigitalIOState,
  InteractionControlState: InteractionControlState,
  CalibrationCommandAction: CalibrationCommandAction,
  CalibrationCommandFeedback: CalibrationCommandFeedback,
  CalibrationCommandResult: CalibrationCommandResult,
  CalibrationCommandActionResult: CalibrationCommandActionResult,
  CalibrationCommandGoal: CalibrationCommandGoal,
  CalibrationCommandActionGoal: CalibrationCommandActionGoal,
  CalibrationCommandActionFeedback: CalibrationCommandActionFeedback,
};
