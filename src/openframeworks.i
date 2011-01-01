%module(directors="1") openframeworks
%{

#include "ofTypes.h"
#include "ofQtUtils.h"

#include "ofConstants.h"
#include "ofMath.h"
#include "ofUtils.h"
#include "ofSerial.h"
#include "ofTexture.h"
#include "ofTrueTypeFont.h"
#include "ofGraphics.h"
#include "ofImage.h"
#include "ofBaseApp.h"
#include "ofAppRunner.h"
#include "ofSoundStream.h"
#include "ofSoundPlayer.h"
#include "ofVideoPlayer.h"
#include "ofVideoGrabber.h"
%}

#define __WIN32__
#define OF_VIDEO_CAPTURE_DIRECTSHOW
#define OF_VIDEO_PLAYER_QUICKTIME

//%feature("nothreads");

%feature("director");
%include "helpers.i"
%include "opengl.i"
%include "std_string.i"

%typemap(in) unsigned char * {
	int size = PyList_Size($input);
	unsigned char* temp = (unsigned char*)malloc(size*sizeof(*temp));
	for(int i = 0; i<size; i++)
	{
		PyObject *o = PyList_GetItem($input, i);
		temp[i] = PyInt_AsLong(o);
	}
	$1 = temp;
}

%include "ofTypes.h"
%include "ofQtUtils.h"

%include "ofConstants.h"
%include "ofMath.h"
%include "ofUtils.h"
%include "ofSerial.h"
%include "ofTexture.h"
%include "ofTrueTypeFont.h"
%include "ofGraphics.h"
%include "ofImage.h"
%include "ofBaseApp.h"
%include "ofAppRunner.h"
%include "ofSoundStream.h"
%include "ofSoundPlayer.h"
%include "ofVideoPlayer.h"
%include "ofVideoGrabber.h"

%include "exception.i"

%exception {
  try {
    $action
  } catch (const std::exception& e) {
    SWIG_exception(SWIG_RuntimeError, e.what());
  }
}

%feature("director:except") {
	if ($error != NULL) {
		PyErr_Print();
		std::exit(-1);
	}
}