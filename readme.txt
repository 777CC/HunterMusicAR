﻿test create brunch
fdsafdsa
Requirement
- Unity2017.1.0

Install
- Load ARUnity5-5.3.2 unity's asset
- 

Fix
- space bar in url can not use.

Host FTP
- ftp://ftp.huntermusicthailand.com:2121

Sample ardata's Url id 1001
- http://www.huntermusicthailand.com/1001/ardata.xml

Sample fset(artoolkit's file) Url
- http://www.huntermusicthailand.com/1001/Marker/hunter%20-%20Copy.fset3

Sample content's Url
- http://www.huntermusicthailand.com/1001/content/QEZ%20mini%20classic.mp4

Register and publish app
-gmail and password
-first name
-last name
-birthday
-App name
-Short description(ไม่เกิน 80 ตัวอักษร)
-Full description(ไม่เกิน 4000 ตัวอักษร)
-Website
-Phone
รูป
-icon 512x512
-Feature Graphic 1024x500
-2 screenshoot 


 XCUIApplication *app = [[XCUIApplication alloc] init];
    [[[[[app.scrollViews.otherElements containingType:XCUIElementTypeIcon identifier:@"AppAdvice"] childrenMatchingType:XCUIElementTypeIcon] matchingIdentifier:@"simpleNFT"] elementBoundByIndex:0] pressForDuration:4.1];
    
    XCUIElement *okButton = app.alerts[@"simpleNFT Would Like to Access the Camera"].collectionViews.buttons[@"OK"];
    [okButton tap];
    [okButton tap];
    [okButton tap];
    [[[[app childrenMatchingType:XCUIElementTypeWindow] elementBoundByIndex:0] childrenMatchingType:XCUIElementTypeOther].element tap];