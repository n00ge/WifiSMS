/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MobileQuickLook.framework/MobileQuickLook
 */

@class NSString, RTF_OIXMLElement;



@interface RTF_OIXMLDocument : RTF_OIXMLNode 
{
    RTF_OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}


- (id)initWithRootElement:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVersion:(id)arg1;
- (void)setRootElement:(id)arg1;
- (id)rootElement;
- (void)setCharacterEncoding:(id)arg1;
- (id)description;
- (id)createMutableXMLString;
- (id)XMLString;
- (id)openingTagString;
- (id)contentString;
- (id)closingTagString;

@end
