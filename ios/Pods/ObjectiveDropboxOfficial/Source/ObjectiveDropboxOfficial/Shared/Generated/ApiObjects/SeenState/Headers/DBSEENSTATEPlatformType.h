///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSEENSTATEPlatformType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PlatformType` union.
///
/// Possible platforms on which a user may view content.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSEENSTATEPlatformType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSEENSTATEPlatformTypeTag` enum type represents the possible tag
/// states with which the `DBSEENSTATEPlatformType` union can exist.
typedef NS_ENUM(NSInteger, DBSEENSTATEPlatformTypeTag) {
  /// The content was viewed on the web.
  DBSEENSTATEPlatformTypeWeb,

  /// The content was viewed on a mobile client.
  DBSEENSTATEPlatformTypeMobile,

  /// The content was viewed on a desktop client.
  DBSEENSTATEPlatformTypeDesktop,

  /// The content was viewed on an unknown platform.
  DBSEENSTATEPlatformTypeUnknown,

  /// (no description).
  DBSEENSTATEPlatformTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSEENSTATEPlatformTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "web".
///
/// Description of the "web" tag state: The content was viewed on the web.
///
/// @return An initialized instance.
///
- (instancetype)initWithWeb;

///
/// Initializes union class with tag state of "mobile".
///
/// Description of the "mobile" tag state: The content was viewed on a mobile
/// client.
///
/// @return An initialized instance.
///
- (instancetype)initWithMobile;

///
/// Initializes union class with tag state of "desktop".
///
/// Description of the "desktop" tag state: The content was viewed on a desktop
/// client.
///
/// @return An initialized instance.
///
- (instancetype)initWithDesktop;

///
/// Initializes union class with tag state of "unknown".
///
/// Description of the "unknown" tag state: The content was viewed on an unknown
/// platform.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnknown;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "web".
///
/// @return Whether the union's current tag state has value "web".
///
- (BOOL)isWeb;

///
/// Retrieves whether the union's current tag state has value "mobile".
///
/// @return Whether the union's current tag state has value "mobile".
///
- (BOOL)isMobile;

///
/// Retrieves whether the union's current tag state has value "desktop".
///
/// @return Whether the union's current tag state has value "desktop".
///
- (BOOL)isDesktop;

///
/// Retrieves whether the union's current tag state has value "unknown".
///
/// @return Whether the union's current tag state has value "unknown".
///
- (BOOL)isUnknown;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSEENSTATEPlatformType` union.
///
@interface DBSEENSTATEPlatformTypeSerializer : NSObject

///
/// Serializes `DBSEENSTATEPlatformType` instances.
///
/// @param instance An instance of the `DBSEENSTATEPlatformType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSEENSTATEPlatformType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSEENSTATEPlatformType *)instance;

///
/// Deserializes `DBSEENSTATEPlatformType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSEENSTATEPlatformType` API object.
///
/// @return An instantiation of the `DBSEENSTATEPlatformType` object.
///
+ (DBSEENSTATEPlatformType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
