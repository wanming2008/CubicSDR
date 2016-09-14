#pragma once

#include "BookmarkPanel.h"

class BookmarkView : public BookmarkPanel {
public:
    BookmarkView( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1, -1 ), long style = wxTAB_TRAVERSAL );
    
    void updateActiveList();
    void saveToFile(std::string bookmarkFn);
    void loadFromFile(std::string bookmarkFn);
    
protected:
    void onTreeBeginLabelEdit( wxTreeEvent& event );
    void onTreeEndLabelEdit( wxTreeEvent& event );
    void onTreeActivate( wxTreeEvent& event );
    void onTreeCollapse( wxTreeEvent& event );
    void onTreeExpanded( wxTreeEvent& event );
    void onTreeSelect( wxTreeEvent& event );
    void onTreeSelectChanging( wxTreeEvent& event );
    void onLabelText( wxCommandEvent& event );
    void onBookmark( wxCommandEvent& event );
    void onActivate( wxCommandEvent& event );
    void onRemove( wxCommandEvent& event );

};