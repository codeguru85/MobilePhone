//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureFileOutputRecordingDelegate.h"

@class AVCaptureConnection, AVCaptureMovieFileOutput, AVCaptureSession, NSError, NSString, NSTimer;

@interface PHAudioRecorder : NSObject <AVCaptureFileOutputRecordingDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureMovieFileOutput *_captureFileOutput;
    AVCaptureConnection *_captureConnection;
    NSError *_buildCaptureSessionError;
    NSTimer *_updateTimer;
    BOOL _isRecording;
    BOOL _handlingStop;
    NSString *_outputFile;
    id <PHAudioRecorderDelegate> _audioRecorderDelegate;
    double _maxRecordedDuration;
}

@property BOOL handlingStop; // @synthesize handlingStop=_handlingStop;
@property BOOL isRecording; // @synthesize isRecording=_isRecording;
@property id <PHAudioRecorderDelegate> audioRecorderDelegate; // @synthesize audioRecorderDelegate=_audioRecorderDelegate;
@property(nonatomic) double maxRecordedDuration; // @synthesize maxRecordedDuration=_maxRecordedDuration;
@property(retain, nonatomic) NSString *outputFile; // @synthesize outputFile=_outputFile;
@property(readonly) NSError *buildCaptureSessionError; // @synthesize buildCaptureSessionError=_buildCaptureSessionError;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
- (void).cxx_destruct;
- (void)_stopWithError:(id)arg1;
- (void)_buildCaptureSessionAndOutputIfNecessary;
- (void)_updateRecordProgress:(id)arg1;
- (void)_captureSessionErrored:(id)arg1;
- (void)_captureSessionWasInterrupted:(id)arg1;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
@property(readonly) AVCaptureConnection *captureConnection;
@property(readonly) AVCaptureMovieFileOutput *captureFileOutput;
@property(readonly) AVCaptureSession *captureSession; // @dynamic captureSession;
- (void)stop;
- (BOOL)startWithError:(id *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

