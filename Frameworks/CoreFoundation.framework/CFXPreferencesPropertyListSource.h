/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface CFXPreferencesPropertyListSource : CFXPreferencesSource 
{
    struct __CFArray { } *_dirtyKeys;
    struct __CFURL { } *_url;
    NSInteger _formatToWrite;
    struct _CFXPreferencesStatInfo { 
        unsigned long long st_ino; 
        long long st_size; 
        struct timespec { 
            NSInteger tv_sec; 
            long tv_nsec; 
        } st_mtimex; 
    } _statInfo;
    unsigned short _mode;
    NSUInteger _owner;
    NSUInteger _group;
    BOOL _checkedOnce;
}


- (unsigned char)writePlistToDisk;
- (void*)createPlistFromDisk;
- (id)init;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (struct __CFArray { }*)copyKeyList;
- (struct __CFDictionary { }*)copyDictionary;
- (void)_reenableSuddenTermination;
- (unsigned char)synchronize;
- (void)dealloc;
- (void)finalize;
- (unsigned char)_backingPlistChangedSinceLastSync;

@end