// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "FizbotBifrost",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "FizbotBifrost",
            targets: ["FizbotBifrost"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "FizbotBifrost",
            path: "./FizbotBifrost.xcframework"
        ),
    ]
)
