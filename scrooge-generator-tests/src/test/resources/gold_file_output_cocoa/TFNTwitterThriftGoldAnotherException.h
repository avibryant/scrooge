/**
 * Generated by Scrooge
 *   version: ?
 *   rev: ?
 *   built at: ?
 */


@import ApacheThrift.TBase;

@interface TFNTwitterThriftGoldAnotherException : NSObject <TBase, NSCoding>

@property (nonatomic) int32_t errorCode;
@property (nonatomic, readonly) BOOL errorCodeIsSet;


- (instancetype)initWithErrorCode:(int32_t)errorCode;
- (void)read:(id<TProtocol>)inProtocol;
- (void)write:(id<TProtocol>)outProtocol;

@end
