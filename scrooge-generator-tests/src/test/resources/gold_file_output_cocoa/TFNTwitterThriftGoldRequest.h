/**
 * Generated by Scrooge
 *   version: ?
 *   rev: ?
 *   built at: ?
 */
#import <TFNTwitterThriftGold/TFNTwitterThriftGoldRequest.h>

@import ApacheThrift.TBase;

@interface TFNTwitterThriftGoldRequest : NSObject <TBase, NSCoding>

@property (nonatomic, copy) NSArray * aList;
@property (nonatomic, readonly) BOOL aListIsSet;

@property (nonatomic, copy) NSSet * aSet;
@property (nonatomic, readonly) BOOL aSetIsSet;

@property (nonatomic, copy) NSDictionary * aMap;
@property (nonatomic, readonly) BOOL aMapIsSet;

@property (nonatomic) TFNTwitterThriftGoldRequest* aRequest;
@property (nonatomic, readonly) BOOL aRequestIsSet;

@property (nonatomic, copy) NSArray * subRequests;
@property (nonatomic, readonly) BOOL subRequestsIsSet;

@property (nonatomic, copy) NSString * hasDefault;
@property (nonatomic, readonly) BOOL hasDefaultIsSet;

@property (nonatomic) int64_t noComment;
@property (nonatomic, readonly) BOOL noCommentIsSet;

@property (nonatomic) int64_t doubleSlashComment;
@property (nonatomic, readonly) BOOL doubleSlashCommentIsSet;

@property (nonatomic) int64_t hashtagComment;
@property (nonatomic, readonly) BOOL hashtagCommentIsSet;

@property (nonatomic) int64_t singleAsteriskComment;
@property (nonatomic, readonly) BOOL singleAsteriskCommentIsSet;

@property (nonatomic) int64_t docStringComment;
@property (nonatomic, readonly) BOOL docStringCommentIsSet;


- (instancetype)initWithAList:(NSArray *)aList aSet:(NSSet *)aSet aMap:(NSDictionary *)aMap aRequest:(TFNTwitterThriftGoldRequest*)aRequest subRequests:(NSArray *)subRequests hasDefault:(NSString *)hasDefault noComment:(int64_t)noComment doubleSlashComment:(int64_t)doubleSlashComment hashtagComment:(int64_t)hashtagComment singleAsteriskComment:(int64_t)singleAsteriskComment docStringComment:(int64_t)docStringComment;
- (void)read:(id<TProtocol>)inProtocol;
- (void)write:(id<TProtocol>)outProtocol;

@end
