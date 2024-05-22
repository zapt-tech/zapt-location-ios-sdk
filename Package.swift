// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ZaptLocation_iOS_SDK",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(
            name: "ZaptLocation_iOS_SDK",
            targets: ["ZaptLocation_iOS_SDK"]),
    ],
    dependencies: [
    ],
    targets: [
        .binaryTarget(
            name: "ZaptLocation_iOS_SDK",
            path: "ZaptLocation_iOS_SDK.framework"
        )
    ]
)
