#ifndef RESIZABLEIMAGEBOX _H
#define RESIZABLEIMAGEBOX _H
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_JPEG_Image.H> // Or other image types
#include <FL/Fl_Shared_Image.H>
class ResizableImageBox: public Fl_Box
{
    public:
    ResizableImageBox(int X, int Y, int W, int H, const char* L = 0, const char* image_path = 0)
        : Fl_Box(X, Y, W, H, L) {
        if (image_path) {
            original_image = new Fl_JPEG_Image(image_path); // Load your image
            current_image = original_image; // Initially, current is original
            image(current_image); // Set the box's image
        } else {
            original_image = nullptr;
            current_image = nullptr;
        }
    }

    ~ResizableImageBox() {
        delete original_image;
        if (current_image != original_image) { // If a copy was made
            delete current_image;
        }
    }

    void resize(int X, int Y, int W, int H) override {
        Fl_Box::resize(X, Y, W, H);
        if (original_image) {
            // Option 1: Copy and resize image data (older FLTK or if data needs changing)
             Fl_Image* new_image = original_image->copy(W, H);
             if (current_image != original_image) delete current_image;
             current_image = new_image;
             image(current_image);

            // Option 2: Scale image for drawing (FLTK 1.4+)
            //original_image->scale(W, H);

            //image(original_image); // Re-assign to trigger redraw with new scale
        }
    }

Fl_Image* original_image;
Fl_Image* current_image; // Used if copying for resizing

};

#endif // RESIZABLEIMAGEBOX _H
