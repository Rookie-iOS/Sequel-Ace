//
//  SPMySQLGeometryData.h
//  sequel-pro
//
//  Created by Hans-Jörg Bibiko on October 07, 2010
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//
//  More info at <https://github.com/sequelpro/sequelpro>

@interface SPMySQLGeometryData : NSObject <NSCopying>
{
	// Holds the WKB bytes coming from SQL server
	Byte *geoBuffer;

	// Holds the buffer length
	NSUInteger bufferLength;

  NSUInteger serverMajorVersion;
}

- (instancetype)initWithBytes:(const void *)geoData length:(NSUInteger)length version:(NSUInteger)majorVersion;
+ (instancetype)dataWithBytes:(const void *)geoData length:(NSUInteger)length version:(NSUInteger)majorVersion;
- (NSString *)description;
- (NSUInteger)length;
- (NSData *)data;
- (NSString *)wktString;
- (NSDictionary *)coordinates;
- (NSInteger)wkbType;
- (NSString *)wktType;

@end
