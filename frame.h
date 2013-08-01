#ifndef FRAME_H
#define FRAME_H

#include <wx/wx.h>

// Forward declaration of ImagePanel
class ImagePanel;

class CarvrFrame : public wxFrame
{
public:
    CarvrFrame(const wxString& title);
    void OnQuit(wxCommandEvent& event);
    void OnOpen(wxCommandEvent& event);
    void OnMouseLDown(wxMouseEvent& event);
private:
    float scale;
    ImagePanel* const panel;
};

#endif
