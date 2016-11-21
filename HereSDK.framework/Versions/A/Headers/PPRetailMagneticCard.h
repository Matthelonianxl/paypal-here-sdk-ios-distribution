/**
 * PPRetailMagneticCard.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: node_modules/retail-payment-device/src/MagneticCard.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"

@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailTransactionContext;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailEmvDevice;
@class PPRetailSecureEntryOptions;
@class PPRetailNumericEntryOptions;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailDeviceOperationResultHandler;
@class PPRetailVirtualPaymentDevice;
@class PPRetailPayer;
@class PPRetailTransactionRecord;

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * Information about a card presented to the PayPal Retail SDK
 */
@interface PPRetailMagneticCard : PPRetailCard

    /**
    * The personal account number (usually masked)
    */
    @property (nonatomic,strong,nullable) NSString* pan;
    /**
    * The expiration date (YYMM)
    */
    @property (nonatomic,strong,nullable) NSString* expiration;
    /**
    * Encrypted track1 data if available
    */
    @property (nonatomic,strong,nullable) NSString* track1;
    /**
    * Encrypted track2 data if available
    */
    @property (nonatomic,strong,nullable) NSString* track2;
    /**
    * Encrypted track3 data if available
    */
    @property (nonatomic,strong,nullable) NSString* track3;
    /**
    * Cardholder first name
    */
    @property (nonatomic,strong,nullable) NSString* firstName;
    /**
    * Cardholder last name
    */
    @property (nonatomic,strong,nullable) NSString* lastName;
    /**
    * Cardholder middle name
    */
    @property (nonatomic,strong,nullable) NSString* middleInitial;
    /**
    * Key serial number of the reader used to interpret the track data
    */
    @property (nonatomic,strong,nullable) NSString* ksn;
    /**
    * true if given the card and the context in which it
 * was presented, a signature is required.
    */
    @property (nonatomic,assign) BOOL isSignatureRequired;








@end