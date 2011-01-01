/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_openframeworks_WRAP_H_
#define SWIG_openframeworks_WRAP_H_

#include <map>
#include <string>


class SwigDirector_ofPoint : public ofPoint, public Swig::Director {

public:
    SwigDirector_ofPoint(PyObject *self, float _x = 0.0, float _y = 0.0, float _z = 0.0);
    SwigDirector_ofPoint(PyObject *self, ofPoint const &pnt);
    virtual ~SwigDirector_ofPoint();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;
};


class SwigDirector_ofRectangle : public ofRectangle, public Swig::Director {

public:
    SwigDirector_ofRectangle(PyObject *self);
    SwigDirector_ofRectangle(PyObject *self, float _x, float _y, float _w, float _h);
    virtual ~SwigDirector_ofRectangle();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;
};


class SwigDirector_ofColor : public ofColor, public Swig::Director {

public:
    SwigDirector_ofColor(PyObject *self);
    virtual ~SwigDirector_ofColor();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;
};


class SwigDirector_ofStyle : public ofStyle, public Swig::Director {

public:
    SwigDirector_ofStyle(PyObject *self);
    virtual ~SwigDirector_ofStyle();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;
};


class SwigDirector_ofBaseDraws : public ofBaseDraws, public Swig::Director {

public:
    SwigDirector_ofBaseDraws(PyObject *self);
    virtual ~SwigDirector_ofBaseDraws();
    virtual void draw(float x, float y);
    virtual void draw(float x, float y, float w, float h);
    virtual float getHeight();
    virtual float getWidth();
    virtual void setAnchorPercent(float xPct, float yPct);
    virtual void setAnchorPoint(int x, int y);
    virtual void resetAnchor();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ofBaseDraws doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[7];
#endif

};


class SwigDirector_ofBaseUpdates : public ofBaseUpdates, public Swig::Director {

public:
    SwigDirector_ofBaseUpdates(PyObject *self);
    virtual ~SwigDirector_ofBaseUpdates();
    virtual void update();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ofBaseUpdates doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_ofBaseHasTexture : public ofBaseHasTexture, public Swig::Director {

public:
    SwigDirector_ofBaseHasTexture(PyObject *self);
    virtual ~SwigDirector_ofBaseHasTexture();
    virtual ofTexture &getTextureReference();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ofBaseHasTexture doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_ofBaseHasPixels : public ofBaseHasPixels, public Swig::Director {

public:
    SwigDirector_ofBaseHasPixels(PyObject *self);
    virtual ~SwigDirector_ofBaseHasPixels();
    virtual unsigned char *getPixels();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ofBaseHasPixels doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_ofBaseVideo : public ofBaseVideo, public Swig::Director {

public:
    SwigDirector_ofBaseVideo(PyObject *self);
    virtual ~SwigDirector_ofBaseVideo();
    virtual void draw(float x, float y);
    virtual void draw(float x, float y, float w, float h);
    virtual float getHeight();
    virtual float getWidth();
    virtual void setAnchorPercent(float xPct, float yPct);
    virtual void setAnchorPoint(int x, int y);
    virtual void resetAnchor();
    virtual void update();
    virtual ofTexture &getTextureReference();
    virtual unsigned char *getPixels();
    virtual void close();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ofBaseVideo doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[11];
#endif

};


class SwigDirector_ofSerial : public ofSerial, public Swig::Director {

public:
    SwigDirector_ofSerial(PyObject *self);
    virtual ~SwigDirector_ofSerial();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;
};


class SwigDirector_ofTexture : public ofTexture, public Swig::Director {

public:
    SwigDirector_ofTexture(PyObject *self);
    SwigDirector_ofTexture(PyObject *self, ofTexture const &mom);
    virtual ~SwigDirector_ofTexture();
    virtual void draw(float x, float y);
    virtual void draw(float x, float y, float w, float h);
    virtual float getHeight();
    virtual float getWidth();
    virtual void setAnchorPercent(float xPct, float yPct);
    virtual void setAnchorPoint(int x, int y);
    virtual void resetAnchor();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ofTexture doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[7];
#endif

};


class SwigDirector_ofTrueTypeFont : public ofTrueTypeFont, public Swig::Director {

public:
    SwigDirector_ofTrueTypeFont(PyObject *self);
    virtual ~SwigDirector_ofTrueTypeFont();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;
};


class SwigDirector_ofImage : public ofImage, public Swig::Director {

public:
    SwigDirector_ofImage(PyObject *self);
    SwigDirector_ofImage(PyObject *self, ofImage const &mom);
    virtual ~SwigDirector_ofImage();
    virtual void draw(float x, float y);
    virtual void draw(float x, float y, float w, float h);
    virtual float getHeight();
    virtual float getWidth();
    virtual void setAnchorPercent(float xPct, float yPct);
    virtual void setAnchorPoint(int x, int y);
    virtual void resetAnchor();
    virtual ofTexture &getTextureReference();
    virtual unsigned char *getPixels();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ofImage doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[9];
#endif

};


class SwigDirector_ofBaseApp : public ofBaseApp, public Swig::Director {

public:
    SwigDirector_ofBaseApp(PyObject *self);
    virtual ~SwigDirector_ofBaseApp();
    virtual void setup();
    virtual void update();
    virtual void draw();
    virtual void exit();
    virtual void windowResized(int w, int h);
    virtual void keyPressed(int key);
    virtual void keyReleased(int key);
    virtual void mouseMoved(int x, int y);
    virtual void mouseDragged(int x, int y, int button);
    virtual void mousePressed(int x, int y, int button);
    virtual void mouseReleased();
    virtual void mouseReleased(int x, int y, int button);
    virtual void audioReceived(float *input, int bufferSize, int nChannels);
    virtual void audioRequested(float *output, int bufferSize, int nChannels);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ofBaseApp doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[14];
#endif

};


class SwigDirector_ofSoundPlayer : public ofSoundPlayer, public Swig::Director {

public:
    SwigDirector_ofSoundPlayer(PyObject *self);
    virtual ~SwigDirector_ofSoundPlayer();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;
};


class SwigDirector_ofVideoPlayer : public ofVideoPlayer, public Swig::Director {

public:
    SwigDirector_ofVideoPlayer(PyObject *self);
    virtual ~SwigDirector_ofVideoPlayer();
    virtual void draw(float x, float y);
    virtual void draw(float x, float y, float w, float h);
    virtual float getHeight();
    virtual float getWidth();
    virtual void setAnchorPercent(float xPct, float yPct);
    virtual void setAnchorPoint(int x, int y);
    virtual void resetAnchor();
    virtual void update();
    virtual ofTexture &getTextureReference();
    virtual unsigned char *getPixels();
    virtual void close();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ofVideoPlayer doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[11];
#endif

};


class SwigDirector_ofVideoGrabber : public ofVideoGrabber, public Swig::Director {

public:
    SwigDirector_ofVideoGrabber(PyObject *self);
    virtual ~SwigDirector_ofVideoGrabber();
    virtual void draw(float x, float y);
    virtual void draw(float x, float y, float w, float h);
    virtual float getHeight();
    virtual float getWidth();
    virtual void setAnchorPercent(float xPct, float yPct);
    virtual void setAnchorPoint(int x, int y);
    virtual void resetAnchor();
    virtual void update();
    virtual ofTexture &getTextureReference();
    virtual unsigned char *getPixels();
    virtual void close();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ofVideoGrabber doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[11];
#endif

};


#endif
